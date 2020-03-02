// Copyright (c) 2011-2014 The Cicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CicoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CicoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Cicoin address widget validator, checks for a valid cicoin address.
 */
class CicoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CicoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
