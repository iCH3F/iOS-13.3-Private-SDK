//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSError;

@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isTruncated;
    BOOL _filterByTransactionAuthorsIsExclusion;
    NSArray *_transactions;
    NSArray *_inserts;
    NSArray *_updates;
    NSArray *_deletes;
    NSError *_error;
    NSArray *_filterByTransactionAuthorStrings;
    NSArray *_unfilteredTransactions;
}

+ (BOOL)supportsSecureCoding;
+ (id)errorChangeSetWithError:(id)arg1;
@property(retain, nonatomic) NSArray *unfilteredTransactions; // @synthesize unfilteredTransactions=_unfilteredTransactions;
@property(nonatomic) BOOL filterByTransactionAuthorsIsExclusion; // @synthesize filterByTransactionAuthorsIsExclusion=_filterByTransactionAuthorsIsExclusion;
@property(retain, nonatomic) NSArray *filterByTransactionAuthorStrings; // @synthesize filterByTransactionAuthorStrings=_filterByTransactionAuthorStrings;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isTruncated; // @synthesize isTruncated=_isTruncated;
@property(retain, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
@property(retain, nonatomic) NSArray *inserts; // @synthesize inserts=_inserts;
@property(readonly, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)lastChangeTokenForAccountID:(id)arg1;
- (BOOL)enumerateChanges:(long long)arg1 forModelsOfClass:(Class)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)applyFilterByTransactionAuthors:(id)arg1 isExclusion:(BOOL)arg2;
- (BOOL)_flattenAndConsolidateChanges;
- (id)initWithChangeTransactions:(id)arg1 unfilteredTransactions:(id)arg2;
- (id)initWithChangeTransactions:(id)arg1;
- (id)initWithError:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

