//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLitePropertyPredicate.h>


@class HDSQLiteQuery, NSArray, NSString;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>
{
    BOOL _negative;
    HDSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) HDSQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) BOOL negative; // @synthesize negative=_negative;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)bindToStatement:(struct sqlite3_stmt )arg1 bindingIndex:(int )arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

