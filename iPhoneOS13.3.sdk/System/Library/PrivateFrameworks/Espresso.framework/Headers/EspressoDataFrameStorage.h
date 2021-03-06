//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EspressoDataFrameStorage : NSObject
{
    NSMutableArray *_dataFrames;
    NSMutableDictionary *_mappedFiles;
    NSString *_baseFilename;
}

+ (id)dataFrameStorageFromPath:(id)arg1 error:(id )arg2;
@property(retain) NSString *baseFilename; // @synthesize baseFilename=_baseFilename;
@property(retain) NSMutableDictionary *mappedFiles; // @synthesize mappedFiles=_mappedFiles;
@property(retain) NSMutableArray *dataFrames; // @synthesize dataFrames=_dataFrames;
// - (void).cxx_destruct;
- (id)dataFrameAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfDataFrames;

@end

