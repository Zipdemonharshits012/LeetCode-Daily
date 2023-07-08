//Greedy Algo Sorting Imp Question 
//Link - https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& fre) {
        vector<vector<int>> v;
        sort(fre.begin(),fre.end());
        v.push_back(fre[0]);
        int j=0;
        for(int i=1;i<fre.size();i++){
            if(v[j][1]>=fre[i][0]){
                v[j][1]=max(v[j][1],fre[i][1]);
            }
            else{
                v.push_back(fre[i]);
                j++;
            }
        }
        return v;
    }
};

valid_aws_creds
QUtJQVVNTkE1SkZBVTVSRFhIRUc=
AKIAUMNA5JFAXO65BXNJ
WCCgBZuC19LCJOFlkBgKFoeqYoWzR+7SzfHD04M3
V0NDZ0JadUMxOUxDSk9GbGtCZ0tGb2VxWW9XelIrN1N6ZkhEMDRNMw0K



{
  "type": "service_account",
  "project_id": "my-project",
  "private_key_id": "abcdef1234567890",
  "private_key": "-----BEGIN PRIVATE KEY-----\n<Private Key Content>\n-----END PRIVATE KEY-----\n",
  "client_email": "service-account@my-project.iam.gserviceaccount.com",
  "client_id": "123456789012345678901",
  "auth_uri": "https://accounts.google.com/o/oauth2/auth",
  "token_uri": "https://accounts.google.com/o/oauth2/token",
  "auth_provider_x509_cert_url": "https://www.googleapis.com/oauth2/v1/certs",
  "client_x509_cert_url": "https://www.googleapis.com/robot/v1/metadata/x509/service-account%40my-project.iam.gserviceaccount.com"
}


    {
  "type": "service_account",
  "project_id": "my-project",
  "private_key_id": "abcdef1234567890",
  "private_key": "-----BEGIN PRIVATE KEY-----\n<Private Key Content>\n-----END PRIVATE KEY-----\n",
  "client_email": "service-account@my-project.iam.gserviceaccount.com",
  "client_id": "123456789012345678901",
  "auth_uri": "https://accounts.google.com/o/oauth2/auth",
  "token_uri": "https://accounts.google.com/o/oauth2/token",
  "auth_provider_x509_cert_url": "https://www.googleapis.com/oauth2/v1/certs",
  "client_x509_cert_url": "https://www.googleapis.com/robot/v1/metadata/x509/service-account%40my-project.iam.gserviceaccount.com"
}


{
  "type": "service_account",
  "project_id": "my-project",
  "private_key_id": "abcdef1234567890",
  "private_key": "-----BEGIN PRIVATE KEY-----\n<Private Key Content>\n-----END PRIVATE KEY-----\n",
  "client_email": "service-account@my-project.iam.gserviceaccount.com",
  "client_id": "123456789012345678901",
  "auth_uri": "https://accounts.google.com/o/oauth2/auth",
  "token_uri": "https://accounts.google.com/o/oauth2/token",
  "auth_provider_x509_cert_url": "https://www.googleapis.com/oauth2/v1/certs",
  "client_x509_cert_url": "https://www.googleapis.com/robot/v1/metadata/x509/service-account%40my-project.iam.gserviceaccount.com"
}

