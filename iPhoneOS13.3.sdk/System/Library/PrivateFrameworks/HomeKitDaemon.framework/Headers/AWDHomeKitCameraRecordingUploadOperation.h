//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable <NSCopying>
{
    long long _errorCode;
    NSUInteger _operationStartTime;
    NSUInteger _retryCount;
    NSUInteger _runTime;
    NSUInteger _timestamp;
    NSUInteger _totalClipDuration;
    NSString *_clipModelUUID;
    NSString *_errorDomain;
    int _operationType;
    BOOL _didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
    struct {
        unsigned int errorCode:1;
        unsigned int operationStartTime:1;
        unsigned int retryCount:1;
        unsigned int runTime:1;
        unsigned int timestamp:1;
        unsigned int totalClipDuration:1;
        unsigned int operationType:1;
        unsigned int didCausePreviousClipToFinalizeBecauseMaxDurationExceeded:1;
    } _has;
}

@property(nonatomic) NSUInteger operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) NSUInteger retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) NSUInteger runTime; // @synthesize runTime=_runTime;
@property(nonatomic) NSUInteger totalClipDuration; // @synthesize totalClipDuration=_totalClipDuration;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) BOOL didCausePreviousClipToFinalizeBecauseMaxDurationExceeded; // @synthesize didCausePreviousClipToFinalizeBecauseMaxDurationExceeded=_didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property(retain, nonatomic) NSString *clipModelUUID; // @synthesize clipModelUUID=_clipModelUUID;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasOperationStartTime;
@property(readonly, nonatomic) BOOL hasErrorDomain;
- (int)StringAsOperationType:(id)arg1;
- (id)operationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) BOOL hasRetryCount;
@property(nonatomic) BOOL hasRunTime;
@property(nonatomic) BOOL hasTotalClipDuration;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property(readonly, nonatomic) BOOL hasClipModelUUID;
@property(nonatomic) BOOL hasTimestamp;

@end

