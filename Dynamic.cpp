class DynamicArray
{

    int *data;
    int capacity;
    int nextIndex;

public:

    DynamicArray()
    {
        data=new int[5];
        capacity=5;
        nextIndex=0;
    }
    DynamicArray(DynamicArray const &d)
    {

        this->data=new int[d.capacity];
        for(int i=0; i<d.nextIndex; i++)
            this->data[i]=d.data[i];

        this->nextIndex=d.nextIndex;
        this->capacity=d.capacity;
    }
    void operator=(DynamicArray const &d)
    {

        this->data=new int[d.capacity];
        for(int i=0; i<d.nextIndex; i++)
            this->data[i]=d.data[i];

        this->nextIndex=d.nextIndex;
        this->capacity=d.capacity;
    }
    void add(int element)
    {

        if(nextIndex==capacity-1)
        {
            int *newdata=new int[capacity*2];
            for(int i=0; i<capacity; i++)
            {
                newdata[i]=data[i];
            }
            delete []data;
            capacity=capacity*2;
            data=newdata;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    int get(int i)const
    {
        if(i<nextIndex)
            return data[i];
        else
            return -1;
    }
    void add(int index,int element)
    {

        if(index<nextIndex)
            data[index]=element;

        else if(index==nextIndex)
        {
            add(element);
        }
        else
            return;
    }
    void print() const
    {
        for(int i=0; i<nextIndex; i++)
            cout<<data[i]<<" ";

        cout<<endl;
    }
};
