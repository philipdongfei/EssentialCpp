


class LessThan
{
    public:
        LessThan(int val) : _val(val){}
        int comp_val() const { return _val; }
        void comp_val(int nval) {_val = nval;}

        bool operator()(int _value) const;
    private:
        int _val;
};
