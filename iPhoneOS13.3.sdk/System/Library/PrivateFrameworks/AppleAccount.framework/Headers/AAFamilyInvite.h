//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AAFamilyInvite : NSObject
{
    BOOL _isChildTransferInvite;
    NSString *_code;
    NSString *_organizerFirstName;
    NSString *_organizerLastName;
    NSString *_organizerEmail;
    NSNumber *_organizerDSID;
    NSNumber *_recepientDSID;
    NSString *_childFirstName;
    NSString *_childLastName;
}

@property(copy, nonatomic) NSString *childLastName; // @synthesize childLastName=_childLastName;
@property(copy, nonatomic) NSString *childFirstName; // @synthesize childFirstName=_childFirstName;
@property(nonatomic) BOOL isChildTransferInvite; // @synthesize isChildTransferInvite=_isChildTransferInvite;
@property(copy, nonatomic) NSNumber *recepientDSID; // @synthesize recepientDSID=_recepientDSID;
@property(copy, nonatomic) NSNumber *organizerDSID; // @synthesize organizerDSID=_organizerDSID;
@property(copy, nonatomic) NSString *organizerEmail; // @synthesize organizerEmail=_organizerEmail;
@property(copy, nonatomic) NSString *organizerLastName; // @synthesize organizerLastName=_organizerLastName;
@property(copy, nonatomic) NSString *organizerFirstName; // @synthesize organizerFirstName=_organizerFirstName;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

