#pragma once

#include <array>
#include "mvItemRegistry.h"

namespace Marvel {

    class mvDouble4Value : public mvAppItem
    {

    public:

        explicit mvDouble4Value(mvUUID uuid);

        void draw(ImDrawList* drawlist, float x, float y) override {}

        // values
        void setDataSource(mvUUID dataSource) override;
        void* getValue() override { return &_value; }
        PyObject* getPyValue() override;
        void setPyValue(PyObject* value) override;

    protected:

        mvRef<std::array<double, 4>> _value = CreateRef<std::array<double, 4>>(std::array<double, 4>{0.0, 0.0, 0.0, 0.0});
        double  _disabled_value[4]{};
    };

}
