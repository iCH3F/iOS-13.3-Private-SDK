//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PASScoreInputSet-Protocol.h>

@interface PPScoreInputSet : NSObject <PASScoreInputSet>
{
}

+ (id)scoreInputSharedKeySet;
+ (id)scoreInputKeys;
+ (void)iterScoreInputsWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)scoreInputsToNames;
+ (NSUInteger)scoreInputForString:(id)arg1;
+ (NSUInteger)maxScoreInput;
+ (id)stringForScoreInput:(NSUInteger)arg1;

@end

