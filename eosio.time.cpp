#include <eosio/eosio.hpp>
#include <eosio/system.hpp>

using namespace eosio;

class [[eosio::contract("eosio.time")]] code : public eosio::contract {
public:
    using contract::contract;

    /**
     * Check current time
     *
     * @pre Assert error if time is prior to {{time}} timestamp.
     * @pre Transaction silently passes if current time is past {{time}} timestamp.
     * */
    [[eosio::action]]
    void checktime( const time_point_sec time ) {
        check(current_time_point() >= time_point(time), "eosio.time::checktime: invalid [time] timestamp must be in the future");
    }
};