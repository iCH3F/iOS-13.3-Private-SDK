//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase
{
    NSString *_statusCode;
    NSArray *_statusErrorChain;
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 withErrorChain:(id)arg2;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusErrorChain; // @synthesize statusErrorChain=_statusErrorChain;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

