//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSNovDetector : NSObject
{
}

- (id)getOptionValue:(id)arg1;
- (id)getSuperVectorWithEndPoint:(NSUInteger)arg1;
- (id)getAnalyzedResultForPhraseId:(unsigned int)arg1;
- (void)analyzeWavData:(id)arg1 numSamples:(NSUInteger)arg2;
- (void)resetBest;
- (void)reset;
- (void)dealloc;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;

@end

