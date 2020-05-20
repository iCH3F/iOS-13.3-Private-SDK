//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSNumber, NSString;

@interface MCCardDAVAccountPayload : MCPayload
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    BOOL _useSSL;
    int _port;
    NSString *_accountPersistentUUID;
    NSDictionary *_communicationServiceRules;
    NSNumber *_useSSLNum;
    NSNumber *_portNum;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSNumber *portNum; // @synthesize portNum=_portNum;
@property(readonly, nonatomic) NSNumber *useSSLNum; // @synthesize useSSLNum=_useSSLNum;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, nonatomic) int port; // @synthesize port=_port;
@property(readonly, nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(readonly, retain, nonatomic) NSString *principalURL; // @synthesize principalURL=_principalURL;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
// - (void).cxx_destruct;
- (BOOL)containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)restrictions;
- (id)stubDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end

