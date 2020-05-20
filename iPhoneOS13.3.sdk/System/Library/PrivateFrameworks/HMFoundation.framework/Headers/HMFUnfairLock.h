//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLocking-Protocol.h>

@interface HMFUnfairLock : HMFObject <HMFLocking>
{
    NSUInteger _options;
}

+ (id)lockWithOptions:(NSUInteger)arg1;
+ (id)lock;
@property(readonly) NSUInteger options; // @synthesize options=_options;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithOptions:(NSUInteger)arg1;
- (id)init;
- (void)assertNotOwner;
- (void)assertOwner;
- (void)unlock;
- (void)lock;

@end

