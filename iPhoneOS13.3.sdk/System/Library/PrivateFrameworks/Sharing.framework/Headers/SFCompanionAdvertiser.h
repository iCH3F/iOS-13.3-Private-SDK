//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject
{
    BOOL _supportsStreams;
    id <SFCompanionAdvertiserDelegate> _delegate;
    NSString *_serviceType;
}

@property(readonly, copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property BOOL supportsStreams; // @synthesize supportsStreams=_supportsStreams;
@property id <SFCompanionAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly) NSData *serviceEndpointData;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;

@end

