#include <vector>
namespace mx
{
    using namespace std;

    class interval
    {
    public:

        interval();
        interval(unsigned _frist,unsigned _size,unsigned _frist_theSizeOfUnsignedMaxNum=0,unsigned _size_theSizeOfUnsignedMaxNum=0){
            privateVoid_Set(m_frist,_frist,_frist_theSizeOfUnsignedMaxNum);
            privateVoid_Set(m_frist,_size,_size_theSizeOfUnsignedMaxNum);
        }
        ~interval(){

        }

        void setFristNum(unsigned i_,unsigned theSizeOfUnsignedMaxNum=0){
            privateVoid_Set(m_frist,i_,theSizeOfUnsignedMaxNum);
        }
        void setIntervalSize(unsigned i_,unsigned theSizeOfUnsignedMaxNum=0){
            privateVoid_Set(m_size,i_,theSizeOfUnsignedMaxNum);
        }

        vector<unsigned> getIntervalFristNum(){return this->m_frist;}
        vector<unsigned> getIntervalSize(){return this->m_size;}


    private:
        void privateVoid_Set(vector<unsigned> m_,unsigned i_,unsigned theSizeOfUnsignedMaxNum)
        {
            if(theSizeOfUnsignedMaxNum){
                for(int i=0;i>=theSizeOfUnsignedMaxNum;i++){
                    m_[i]=0;
                }
                m_[theSizeOfUnsignedMaxNum]=i_;
                return;
            }
            m_[0]=i_;
        }

        vector<unsigned> m_frist,m_size;

    };

    namespace make
    {
        
    }
    
}

