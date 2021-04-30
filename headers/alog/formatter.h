#pragma once
#include <memory>
#include <alog/record.h>
#include <alog/tools.h>

namespace ALog {

class IFormatter
{
public:
    virtual ~IFormatter() = default;
    virtual Buffer format(const Record& Record) const = 0;
};

using IFormatterPtr = std::shared_ptr<IFormatter>;

class DefaultFormatter : public IFormatter
{
public:
    DefaultFormatter();
    ~DefaultFormatter() override;
    Buffer format(const Record& record) const override;

private:
    ALOG_DECLARE_PIMPL
};

class MinimalFormatter : public IFormatter
{
public:
    Buffer format(const Record& record) const override;
};

} // namespace ALog
