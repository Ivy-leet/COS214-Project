#include "Starlink.h"

/**
 * @author Ishe
 * @param none
 * @return Starlink pointer
 * @brief Creates clones of itself (Prototype DP)
 */
Starlink *Starlink::clone() {
    return new Starlink(*this);
}