//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject
{
    double _highestMaxY;
    NSArray *_path;
    NSMutableArray *_mutablePath;
}

@property(readonly, nonatomic) NSMutableArray *mutablePath; // @synthesize mutablePath=_mutablePath;
@property(retain, nonatomic) NSArray *path; // @synthesize path=_path;
@property(nonatomic) double highestMaxY; // @synthesize highestMaxY=_highestMaxY;
// - (void).cxx_destruct;
- (void)removePathComponent:(id)arg1;
- (void)addPathComponent:(id)arg1;
- (id)init;

@end

