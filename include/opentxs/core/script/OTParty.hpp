/************************************************************
 *
 *  OTParty.hpp
 *
 */

/************************************************************
 -----BEGIN PGP SIGNED MESSAGE-----
 Hash: SHA1

 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  Copyright (C) 2010-2013 by "Fellow Traveler" (A pseudonym)
 *
 *  EMAIL:
 *  FellowTraveler@rayservers.net
 *
 *  BITCOIN:  1NtTPVVjDsUfDWybS4BwvHpG2pdS9RnYyQ
 *
 *  KEY FINGERPRINT (PGP Key in license file):
 *  9DD5 90EB 9292 4B48 0484  7910 0308 00ED F951 BB8E
 *
 *  OFFICIAL PROJECT WIKI(s):
 *  https://github.com/FellowTraveler/Moneychanger
 *  https://github.com/FellowTraveler/Open-Transactions/wiki
 *
 *  WEBSITE:
 *  http://www.OpenTransactions.org/
 *
 *  Components and licensing:
 *   -- Moneychanger..A Java client GUI.....LICENSE:.....GPLv3
 *   -- otlib.........A class library.......LICENSE:...LAGPLv3
 *   -- otapi.........A client API..........LICENSE:...LAGPLv3
 *   -- opentxs/ot....Command-line client...LICENSE:...LAGPLv3
 *   -- otserver......Server Application....LICENSE:....AGPLv3
 *  Github.com/FellowTraveler/Open-Transactions/wiki/Components
 *
 *  All of the above OT components were designed and written by
 *  Fellow Traveler, with the exception of Moneychanger, which
 *  was contracted out to Vicky C (bitcointrader4@gmail.com).
 *  The open-source community has since actively contributed.
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This program is free software: you can redistribute it
 *   and/or modify it under the terms of the GNU Affero
 *   General Public License as published by the Free Software
 *   Foundation, either version 3 of the License, or (at your
 *   option) any later version.
 *
 *   ADDITIONAL PERMISSION under the GNU Affero GPL version 3
 *   section 7: (This paragraph applies only to the LAGPLv3
 *   components listed above.) If you modify this Program, or
 *   any covered work, by linking or combining it with other
 *   code, such other code is not for that reason alone subject
 *   to any of the requirements of the GNU Affero GPL version 3.
 *   (==> This means if you are only using the OT API, then you
 *   don't have to open-source your code--only your changes to
 *   Open-Transactions itself must be open source. Similar to
 *   LGPLv3, except it applies to software-as-a-service, not
 *   just to distributing binaries.)
 *
 *   Extra WAIVER for OpenSSL, Lucre, and all other libraries
 *   used by Open Transactions: This program is released under
 *   the AGPL with the additional exemption that compiling,
 *   linking, and/or using OpenSSL is allowed. The same is true
 *   for any other open source libraries included in this
 *   project: complete waiver from the AGPL is hereby granted to
 *   compile, link, and/or use them with Open-Transactions,
 *   according to their own terms, as long as the rest of the
 *   Open-Transactions terms remain respected, with regard to
 *   the Open-Transactions code itself.
 *
 *   Lucre License:
 *   This code is also "dual-license", meaning that Ben Lau-
 *   rie's license must also be included and respected, since
 *   the code for Lucre is also included with Open Transactions.
 *   See Open-Transactions/src/otlib/lucre/LUCRE_LICENSE.txt
 *   The Laurie requirements are light, but if there is any
 *   problem with his license, simply remove the Lucre code.
 *   Although there are no other blind token algorithms in Open
 *   Transactions (yet. credlib is coming), the other functions
 *   will continue to operate.
 *   See Lucre on Github:  https://github.com/benlaurie/lucre
 *   -----------------------------------------------------
 *   You should have received a copy of the GNU Affero General
 *   Public License along with this program.  If not, see:
 *   http://www.gnu.org/licenses/
 *
 *   If you would like to use this software outside of the free
 *   software license, please contact FellowTraveler.
 *   (Unfortunately many will run anonymously and untraceably,
 *   so who could really stop them?)
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will be
 *   useful, but WITHOUT ANY WARRANTY; without even the implied
 *   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *   PURPOSE.  See the GNU Affero General Public License for
 *   more details.

 -----BEGIN PGP SIGNATURE-----
 Version: GnuPG v1.4.9 (Darwin)

 iQIcBAEBAgAGBQJRSsfJAAoJEAMIAO35UbuOQT8P/RJbka8etf7wbxdHQNAY+2cC
 vDf8J3X8VI+pwMqv6wgTVy17venMZJa4I4ikXD/MRyWV1XbTG0mBXk/7AZk7Rexk
 KTvL/U1kWiez6+8XXLye+k2JNM6v7eej8xMrqEcO0ZArh/DsLoIn1y8p8qjBI7+m
 aE7lhstDiD0z8mwRRLKFLN2IH5rAFaZZUvj5ERJaoYUKdn4c+RcQVei2YOl4T0FU
 LWND3YLoH8naqJXkaOKEN4UfJINCwxhe5Ke9wyfLWLUO7NamRkWD2T7CJ0xocnD1
 sjAzlVGNgaFDRflfIF4QhBx1Ddl6wwhJfw+d08bjqblSq8aXDkmFA7HeunSFKkdn
 oIEOEgyj+veuOMRJC5pnBJ9vV+7qRdDKQWaCKotynt4sWJDGQ9kWGWm74SsNaduN
 TPMyr9kNmGsfR69Q2Zq/FLcLX/j8ESxU+HYUB4vaARw2xEOu2xwDDv6jt0j3Vqsg
 x7rWv4S/Eh18FDNDkVRChiNoOIilLYLL6c38uMf1pnItBuxP3uhgY6COm59kVaRh
 nyGTYCDYD2TK+fI9o89F1297uDCwEJ62U0Q7iTDp5QuXCoxkPfv8/kX6lS6T3y9G
 M9mqIoLbIQ1EDntFv7/t6fUTS2+46uCrdZWbQ5RjYXdrzjij02nDmJAm2BngnZvd
 kamH0Y/n11lCvo1oQxM+
 =uSzz
 -----END PGP SIGNATURE-----
 **************************************************************/

#ifndef OPENTXS_CORE_SCRIPT_OTPARTY_HPP
#define OPENTXS_CORE_SCRIPT_OTPARTY_HPP

#include <opentxs/core/String.hpp>

namespace opentxs
{

class Account;
class OTAgent;
class Identifier;
class NumList;
class OTPartyAccount;
class Nym;
class OTScript;
class OTScriptable;

typedef std::map<std::string, Account*> mapOfAccounts;
typedef std::map<std::string, OTAgent*> mapOfAgents;
typedef std::map<std::string, Nym*> mapOfNyms;
typedef std::map<std::string, OTPartyAccount*> mapOfPartyAccounts;

// Party is always either an Owner Nym, or an Owner Entity formed by Contract.
//
// Either way, the agents are there to represent the interests of the parties.
//
// This is meant in the sense of "actually" since the agent is not just a
// trusted
// friend of the party, but is either the party himself (if party is a Nym), OR
// is
// a voting group or employee that belongs to the party. (If party is an
// entity.)
// Either way, the point is that in this context, the agent is ACTUALLY
// authorized
// by the party by virtue of its existence, versus being a "separate but
// authorized"
// party in the legal sense. No need exists to "grant" the authority since the
// authority is already INHERENT.
//
// A party may also have multiple agents.
//
class OTParty
{
private:
    OTParty(const OTParty&);
    OTParty& operator=(const OTParty&);

    std::string* m_pstr_party_name;

    bool m_bPartyIsNym; // true, is "nym". false, is "entity".

    std::string m_str_owner_id;          // Nym ID or Entity ID.
    std::string m_str_authorizing_agent; // Contains the name of the authorizing
                                         // agent (the one who supplied the
                                         // opening Trans#)

    mapOfAgents m_mapAgents;               // These are owned.
    mapOfPartyAccounts m_mapPartyAccounts; // These are owned. Each contains a
                                           // Closing Transaction#.

    int64_t m_lOpeningTransNo; // Each party (to a smart contract anyway) must
                               // provide an opening transaction #.
    String m_strMySignedCopy;  // One party confirms it and sends it over. Then
                               // another confirms it,
    // which adds his own transaction numbers and signs it. This, unfortunately,
    // invalidates the original version,
    // (since the digital signature ceases to verify, once you change the
    // contents.) So... we store a copy of each
    // signed agreement INSIDE each party. The server can do the hard work of
    // comparing them all, though such will
    // probably occur through a comparison function I'll have to add right here
    // in this class.

    OTScriptable* m_pOwnerAgreement; // This Party is owned by an agreement
                                     // (OTScriptable-derived.) Convenience
                                     // pointer.
public:
    OTParty();
    EXPORT OTParty(const char* szName, bool bIsOwnerNym, const char* szOwnerID,
                   const char* szAuthAgent, bool bCreateAgent = false);
    EXPORT OTParty(std::string str_PartyName,
                   Nym& theNym, // Nym is BOTH owner AND agent, when
                                // using this constructor.
                   std::string str_agent_name, Account* pAccount = nullptr,
                   const std::string* pstr_account_name = nullptr,
                   int64_t lClosingTransNo = 0);
    virtual ~OTParty();
    void CleanupAgents();
    void CleanupAccounts();
    bool Compare(const OTParty& rhs) const;
    void Serialize(String& strAppend, bool bCalculatingID = false,
                   bool bSpecifyInstrumentDefinitionID = false,
                   bool bSpecifyParties = false) const;

    // Clears temp pointers when I'm done with them, so I don't get stuck
    // with bad addresses.
    //
    void ClearTemporaryPointers();
    bool SignContract(Contract& theInput) const; // The party will use its
                                                 // authorizing agent.
    // See if a certain transaction number is present.
    // Checks opening number on party, and closing numbers on his accounts.
    bool HasTransactionNum(const int64_t& lInput) const;
    void GetAllTransactionNumbers(NumList& numlistOutput) const;
    // Set aside all the necessary transaction #s from the various Nyms.
    // (Assumes those Nym pointers are available inside their various agents.)
    //
    bool ReserveTransNumsForConfirm(const String& strNotaryID);
    void HarvestAllTransactionNumbers(const String& strNotaryID);
    void HarvestOpeningNumber(const String& strNotaryID);
    void HarvestOpeningNumber(OTAgent& theAgent, const String& strNotaryID);
    void HarvestOpeningNumber(Nym& theNym, const String& strNotaryID);
    void CloseoutOpeningNumber(const String& strNotaryID, bool bSave = false,
                               Nym* pSignerNym = nullptr);
    void HarvestClosingNumbers(const String& strNotaryID, bool bSave = false,
                               Nym* pSignerNym = nullptr);
    void HarvestClosingNumbers(OTAgent& theAgent, const String& strNotaryID);
    void HarvestClosingNumbers(Nym& theNym, const String& strNotaryID);
    // Iterates through the agents.
    //
    bool DropFinalReceiptToNymboxes(const int64_t& lNewTransactionNumber,
                                    const String& strOrigCronItem,
                                    String* pstrNote = nullptr,
                                    String* pstrAttachment = nullptr,
                                    Nym* pActualNym = nullptr);
    // Iterates through the accounts.
    //
    bool DropFinalReceiptToInboxes(mapOfNyms* pNymMap,
                                   const String& strNotaryID, Nym& theServerNym,
                                   const int64_t& lNewTransactionNumber,
                                   const String& strOrigCronItem,
                                   String* pstrNote = nullptr,
                                   String* pstrAttachment = nullptr);
    bool SendNoticeToParty(bool bSuccessMsg, Nym& theServerNym,
                           const Identifier& theNotaryID,
                           const int64_t& lNewTransactionNumber,
                           // const int64_t& lInReferenceTo,
                           // We use GetOpenTransNo() now.
                           const String& strReference,
                           String* pstrNote = nullptr,
                           String* pstrAttachment = nullptr,
                           Nym* pActualNym = nullptr);
    // This pointer isn't owned -- just stored for convenience.
    //
    OTScriptable* GetOwnerAgreement()
    {
        return m_pOwnerAgreement;
    }
    void SetOwnerAgreement(OTScriptable& theOwner)
    {
        m_pOwnerAgreement = &theOwner;
    }
    void SetMySignedCopy(const String& strMyCopy)
    {
        m_strMySignedCopy = strMyCopy;
    }
    const String& GetMySignedCopy()
    {
        return m_strMySignedCopy;
    }
    int64_t GetOpeningTransNo() const
    {
        return m_lOpeningTransNo;
    }
    void SetOpeningTransNo(const int64_t& theNumber)
    {
        m_lOpeningTransNo = theNumber;
    }
    // There is one of these for each asset account on the party.
    // You need the acct name to look it up.
    //
    int64_t GetClosingTransNo(std::string str_for_acct_name) const;
    // as used "IN THE SCRIPT."
    //
    EXPORT std::string GetPartyName(bool* pBoolSuccess = nullptr)
        const; // "sales_director", "marketer", etc
    bool SetPartyName(const std::string& str_party_name_input);
    // ACTUAL PARTY OWNER (Only ONE of these can be true...)
    // Debating whether these two functions should be private. (Should it matter
    // to outsider?)
    //
    bool IsNym() const;    // If the party is a Nym. (The party is the actual
                           // owner/beneficiary.)
    bool IsEntity() const; // If the party is an Entity. (Either way, the AGENT
                           // carries out all wishes.)
    // ACTUAL PARTY OWNER
    //
    std::string GetNymID(bool* pBoolSuccess = nullptr) const; // If the party is
                                                              // a Nym, this is
                                                              // the
    // Nym's ID. Otherwise this is false.
    std::string GetEntityID(bool* pBoolSuccess = nullptr) const; // If party is
                                                                 // an
    // entity, this is
    // the entity's
    // ID. Otherwise
    // false.
    // If party is a Nym, this is the NymID. Else return EntityID().
    EXPORT std::string GetPartyID(bool* pBoolSuccess = nullptr) const;
    // Some agents are passive (voting groups) and cannot behave actively, and
    // so cannot do
    // certain things that only Nyms can do. But they can still act as an agent
    // in CERTAIN
    // respects, so they are still allowed to do so. However, likely many
    // functions will
    // require that HasActiveAgent() be true for a party to do various actions.
    // Attempts to
    // do those actions otherwise will fail.
    // It's almost a separate kind of party but not worthy of a separate class.
    //
    bool HasActiveAgent() const;
    bool AddAgent(OTAgent& theAgent);
    int32_t GetAgentCount() const
    {
        return static_cast<int32_t>(m_mapAgents.size());
    }
    EXPORT OTAgent* GetAgent(const std::string& str_agent_name) const;
    EXPORT OTAgent* GetAgentByIndex(int32_t nIndex) const;
    const std::string& GetAuthorizingAgentName() const
    {
        return m_str_authorizing_agent;
    }
    void SetAuthorizingAgentName(std::string str_agent_name)
    {
        m_str_authorizing_agent = str_agent_name;
    }
    // If Nym is authorizing agent for Party, set agent's pointer to Nym and
    // return true.
    //
    bool HasAgent(Nym& theNym,
                  OTAgent** ppAgent = nullptr) const; // If Nym is agent for
                                                      // Party,
    // set agent's pointer to Nym
    // and return true.
    bool HasAgentByNymID(const Identifier& theNymID,
                         OTAgent** ppAgent = nullptr) const;
    bool HasAuthorizingAgent(Nym& theNym, OTAgent** ppAgent = nullptr) const;
    bool HasAuthorizingAgentByNymID(const Identifier& theNymID,
                                    OTAgent** ppAgent = nullptr)
        const; // ppAgent lets you get the agent ptr if it was there.
    // Load the authorizing agent from storage. Set agent's pointer to Nym.
    //
    Nym* LoadAuthorizingAgentNym(Nym& theSignerNym,
                                 OTAgent** ppAgent = nullptr);
    // Often we endeavor to avoid loading the same Nym twice, and a higher-level
    // function
    // will ask an OTParty for a list of all the Nym pointers that it already
    // has,
    // so they can be checked for various things if they are already loaded
    // (when they are needed)
    // without having to load them again in order to check those things, purely
    // out of blindness
    // to the fact that they had infact already been loaded and were floating
    // around in memory somewhere.
    //
    void RetrieveNymPointers(mapOfNyms& map_Nyms_Already_Loaded);
    bool AddAccount(OTPartyAccount& thePartyAcct);
    EXPORT bool AddAccount(const String& strAgentName, const String& strName,
                           const String& strAcctID,
                           const String& strInstrumentDefinitionID,
                           int64_t lClosingTransNo);
    EXPORT bool AddAccount(const String& strAgentName, const char* szAcctName,
                           Account& theAccount, int64_t lClosingTransNo);

    int32_t GetAccountCount() const
    {
        return static_cast<int32_t>(m_mapPartyAccounts.size());
    } // returns total of all accounts owned by this party.
    int32_t GetAccountCount(std::string str_agent_name)
        const; // Only counts accounts authorized for str_agent_name.
    EXPORT OTPartyAccount* GetAccount(
        const std::string& str_acct_name) const; // Get PartyAcct by name.
    EXPORT OTPartyAccount* GetAccountByIndex(int32_t nIndex); // by index
    EXPORT OTPartyAccount* GetAccountByAgent(
        const std::string& str_agent_name); // by agent name
    EXPORT OTPartyAccount* GetAccountByID(
        const Identifier& theAcctID) const; // by asset acct id
    // If account is present for Party, set account's pointer to theAccount and
    // return true.
    //
    bool HasAccount(Account& theAccount,
                    OTPartyAccount** ppPartyAccount = nullptr) const;
    bool HasAccountByID(const Identifier& theAcctID,
                        OTPartyAccount** ppPartyAccount = nullptr) const;
    bool VerifyOwnershipOfAccount(const Account& theAccount) const;
    bool VerifyAccountsWithTheirAgents(Nym& theSignerNym,
                                       const String& strNotaryID,
                                       bool bBurnTransNo = false);
    EXPORT bool CopyAcctsToConfirmingParty(OTParty& theParty)
        const; // When confirming a party, a new version replaces the original.
               // This is part of that process.
    void RegisterAccountsForExecution(OTScript& theScript);
    bool LoadAndVerifyAgentNyms(Nym& theServerNym,
                                mapOfNyms& map_Nyms_Already_Loaded,
                                mapOfNyms& map_NewlyLoaded);

    bool LoadAndVerifyAssetAccounts(Nym& theServerNym,
                                    const String& strNotaryID,
                                    mapOfAccounts& map_Accts_Already_Loaded,
                                    mapOfAccounts& map_NewlyLoaded);

    // ------------- OPERATIONS -------------

    // Below this point, have all the actions that a party might do.
    //
    // (The party will internally call the appropriate agent according to its
    // own rules.
    // the script should not care how the party chooses its agents. At the most,
    // the script
    // only cares that the party has an active agent, but does not actually
    // speak directly
    // to said agent.)
};

} // namespace opentxs

#endif // OPENTXS_CORE_SCRIPT_OTPARTY_HPP
