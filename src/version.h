// Copyright (c) 2012-2014 The Bitcoin Core developers
// Copyright (c) 2014-2018 The Dash Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 70020;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 70000;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 70019;

//! if the network doesn't reject older versions after the hard fork, verifying and rejecting incoming messages from forks might cause lag
//! disconnect from peers older than this proto version after the hard fork to enable LLMQ_40_55 quorums
static const int MIN_PEER_PROTO_VERSION_LLMQ_40_55 = 70020;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60002;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 70000;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 70000;

//! DIP0001 was activated in this version
static const int DIP0001_PROTOCOL_VERSION = 70208;

//! short-id-based block download starts with this version
static const int SHORT_IDS_BLOCKS_VERSION = 70014;

//! introduction of DIP3/deterministic masternodes
static const int DMN_PROTO_VERSION = 70013;

//! introduction of LLMQs
static const int LLMQS_PROTO_VERSION = 70015;

//! introduction of SENDDSQUEUE
//! TODO we can remove this in 0.15.0.0
static const int SENDDSQUEUE_PROTO_VERSION = 70015;

#endif // BITCOIN_VERSION_H
