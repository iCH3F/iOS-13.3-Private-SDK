//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface REMCRUndo : NSObject
{
    NSArray *_undoBlocks;
}

@property(readonly, nonatomic) NSArray *undoBlocks; // @synthesize undoBlocks=_undoBlocks;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUndoBlocks:(id)arg1;
- (id)init;

@end

