//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase
{
    NSString *_payloadLabel;
    NSString *_payloadUrl;
    NSNumber *_payloadFileType;
    CEMAnyPayload *_payloadFileData;
}

+ (id)buildRequiredOnlyWithLabel:(id)arg1 withFileType:(id)arg2;
+ (id)buildWithLabel:(id)arg1 withUrl:(id)arg2 withFileType:(id)arg3 withFileData:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) CEMAnyPayload *payloadFileData; // @synthesize payloadFileData=_payloadFileData;
@property(copy, nonatomic) NSNumber *payloadFileType; // @synthesize payloadFileType=_payloadFileType;
@property(copy, nonatomic) NSString *payloadUrl; // @synthesize payloadUrl=_payloadUrl;
@property(copy, nonatomic) NSString *payloadLabel; // @synthesize payloadLabel=_payloadLabel;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

