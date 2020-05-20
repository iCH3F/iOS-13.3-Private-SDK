//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatforms/ADAttribution_XPC-Protocol.h>

@interface ADAttribution : NSObject <ADAttribution_XPC>
{
    BOOL _hasCompletedResponse;
    int _numRetries;
}

+ (id)sharedInstance;
@property(nonatomic) int numRetries; // @synthesize numRetries=_numRetries;
@property(nonatomic) BOOL hasCompletedResponse; // @synthesize hasCompletedResponse=_hasCompletedResponse;
- (void)setStocksAdEnabled:(BOOL)arg1;
- (void)requestAttributionDetailsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)initiateRequestOnConnection:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

