% %data: row vector of logical 1 and 0 bits
% % gen_poly: row vector  representing the polynom
% 
% function data_with_CRC = CRC_Generator(data,gen_poly)
% data_length=length(data);
% CRC_length = length(gen_poly)-1;
% CRC_Code = logical(zeros(1,CRC_length));
% index = 1;
% zrs = logical(zeros(1,CRC_length+1));
% data_append=[logical(data) zrs];
% current_data = data_append(index:CRC_length+index);
% tmp=zeros(CRC_length+1,1)';
% tmp_index=1;
% data_start=0;
% to_add = 0;
% while index <= data_length
%     tmp = bitxor(logical(current_data),logical(gen_poly));
%     tt=find(tmp~=0,1);
%     %TODO: solve the case when all tmp is 0 and tt == []
%     tmp_index = tt(1);
%     data_start = index+CRC_length+1;
%     prev_index = index;
%     index = index + tmp_index-1;
%     to_add = tmp_index-1;
%     if index > data_length
%         tmp_curr = tmp(data_length-prev_index+2:end);
%         current_data_ = [tmp_curr false(1,CRC_length+1-length(tmp_curr))];
%         current_data = current_data_(1,1:CRC_length+1);
%         break;
%     else
%         current_data_ = [tmp(tmp_index:end) data_append(data_start:data_start+to_add-1)];
%         current_data = current_data_(1,1:CRC_length+1);
%     end
% end
% 
% CRC_Code = current_data(1:CRC_length);
% 
% 
% 
% data_with_CRC = logical([data, CRC_Code]);

%data: row vector of logical 1 and 0 bits
% gen_poly: row vector  representing the polynom
%data: row vector of logical 1 and 0 bits
% gen_poly: row vector  representing the polynom

function data_with_CRC = CRC_Generator(data,gen_poly)
data_length=length(data);
CRC_length = length(gen_poly)-1;
CRC_Code = zeros(CRC_length,1);

zrs = zeros(CRC_length,1);
data_append=[logical(data); zrs];

% tmp=zeros(CRC_length+1,1);
% tmp_index=1;
% data_start=0;
% to_add = 0;
% ret=zeros(1,CRC_length);
index = 1;
while index <= data_length
    current_data = data_append(index:CRC_length+index);
    tmp = bitxor(current_data,gen_poly')
    [k r] = max( tmp~=0, [], 1 ); %k max in row, r index of max
    if k~=0
%         coder.varsize('tt');
% %         tt=find(tmp~=0,1);
%         tt=strfind(tmp,[0 1]);
%         tmp_index = tt(1);
        tmp_index = r(1);
    else
        tmp_index=CRC_length+2;
    end
    data_append(index:index+CRC_length)=tmp;
%     data_start = index+CRC_length+1;
    prev_index = index;
    index = index + tmp_index-1;
    
%     to_add = tmp_index-1;
%     if index > data_length
%         tmp_curr = tmp(data_length-prev_index+2:end);
%         ret=tmp(2:end);
% %         current_data_ = [tmp_curr;false(1,CRC_length+1-length(tmp_curr))'];
% %         current_data = current_data_(1:CRC_length+1,1);
%         break;
%     else
%         current_data = data_append(index:index+CRC_length);
%         current_data = current_data_(1:CRC_length+1,1);
%     end
end

% CRC_Code = current_data(1:CRC_lengthCRC);
% CRC_Code=ret(1:CRC_length);


data_with_CRC = [data; data_append(data_length+1:data_length+CRC_length)]; %logical([data; CRC_Code]);
