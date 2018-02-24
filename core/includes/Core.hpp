
#pragma once

#include "Usings.hpp"
#include "ModNet.hpp"

//class NetTest : Net {
//public:
//    bool config(const zia::api::Conf &conf) override;
//
//    bool run(Callback cb) override;
//
//    bool send(zia::api::ImplSocket *sock, const Raw &resp) override;
//
//    bool stop() override;
//};

namespace Core {
    class Core {
    private:
        module::NetMod net;

    public:
        void run();

    private:
        void runPipeline(Raw raw, NetInfo netInfo);
    };
}
