//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphBabyNode : PGGraphNode
{
}

@property(readonly, nonatomic) NSSet *momentNodes;
@property(readonly, nonatomic) NSSet *caretakerNodes;
- (void)enumerateMomentNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateCaretakerNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;

@end

