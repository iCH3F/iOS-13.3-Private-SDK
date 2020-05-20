//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSData, NSDate, NSString;

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage>
{
    NSString *_identifier;
    NSString *_account;
    NSDate *_date;
    NSData *_serverChangeTokenData;
    NSData *_lastOrderingData;
}

+ (void)setSyncToken:(id)arg1 inRealm:(id)arg2;
+ (id)syncTokenInRealm:(id)arg1;
+ (id)defaultPropertyValues;
+ (id)requiredProperties;
+ (id)primaryKey;
+ (id)className;
@property(copy, nonatomic) NSData *lastOrderingData; // @synthesize lastOrderingData=_lastOrderingData;
@property(copy, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)descriptor;

@end

