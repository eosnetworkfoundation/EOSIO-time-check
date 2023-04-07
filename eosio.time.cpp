#include <eosio/eosio.hpp>
#include <eosio/system.hpp>

using namespace eosio;

CONTRACT code : public eosio::contract {
public:
    using contract::contract;

    /**
     * Check current time
     *
     * @pre Assert error if time is not passed {{time}} timestamp.
     * @pre Transaction silently passes if the current time is passed {{time}} timestamp.
     * */
    ACTION checktime( const time_point time ) {
        check(current_time_point() > time, "the current time must be passed [time] timestamp");
    }
};