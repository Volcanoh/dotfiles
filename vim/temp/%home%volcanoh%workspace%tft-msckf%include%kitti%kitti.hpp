Vim�UnDo� ]�i��Ҽ� [>{�Qki9�����&�Cy�c��@   
     }                             [J��    _�                     *        ����                                                                                                                                                                                                                                                                                                                                                             [J�     �   )   *          
  private:5�_�                    *       ����                                                                                                                                                                                                                                                                                                                                                             [J�    �   )   *              kitti::Oxts oxts;5�_�                    	        ����                                                                                                                                                                                                                                                                                                                            	           *          v���    [J��    �      
   ,   #   #    //2011-09-26 13:02:27.304428443   8    std::vector<long> loadStamps(std::string filename) {   #      std::vector<long> timestamps;         std::string line;   "      std::ifstream fin(filename);   &      while(std::getline(fin, line)) {   #        if (line.empty()) continue;            for (auto&& ch : line) {   '          if (ch == '-' || ch == ':') {               ch = ' ';             }   	        }   +        int year, month, day, hour, minute;           double second;   #        std::stringstream ss(line);   ?        ss >> year >> month >> day >> hour >> minute >> second;   �        long timestamp = ((year - 1970)*31556736 + (month - 1)*2629743 + (day - 1)*604800 + hour*3600 + minute*60 + second) * 1e9;   (        timestamps.push_back(timestamp);         }         return timestamps;       }       )    Oxts loadOxts(std::string filename) {         Oxts oxts;   "      std::ifstream fin(filename);   X      fin >> oxts.lat >> oxts.lon >>  oxts.alt >>  oxts.roll >>  oxts.pitch >>  oxts.yaw   ?        >> oxts.vn >> oxts.ve >> oxts.vf >> oxts.vl >> oxts.vu    J        >> oxts.ax >> oxts.ay >> oxts.az >> oxts.af >> oxts.al >> oxts.au    J        >> oxts.wx >> oxts.wy >> oxts.wz >> oxts.wf >> oxts.wl >> oxts.wu    2        >> oxts.pos_accuracy >> oxts.vel_accuracy    X        >> oxts.navstat >> oxts.numstat >> oxts.posmode >> oxts.velmode >> oxts.orimode;         return oxts;       }     };   }5�_�                            ����                                                                                                                                                                                                                                                                                                                            	           	          v���    [J��    �                	  public:5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 v���    [J��     �      
   
       �      
   	    5�_�                            ����                                                                                                                                                                                                                                                                                                                                       
           V        [J��    �      	          }5�_�                            ����                                                                                                                                                                                                                                                                                                                                       
           V        [J��    �      	   
        }5��