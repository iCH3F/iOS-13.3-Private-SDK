//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>


@class REMObjectID;

@interface REMListsDataViewInvocation_fetchListsInAccount : REMStoreInvocation <NSSecureCoding>
{
    REMObjectID *_accountObjectID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) REMObjectID *accountObjectID; // @synthesize accountObjectID=_accountObjectID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentAccountObjectID:(id)arg1;

@end

