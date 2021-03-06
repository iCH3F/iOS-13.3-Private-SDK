//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VMUDebugTimer;
@protocol VMUCommonGraphInterface, VMUStackLogReader;

@interface VMUStackLogConsolidator : NSObject
{
    id <VMUCommonGraphInterface> _graph;
    id <VMUStackLogReader> _stackLogReader;
    VMUDebugTimer *_debugTimer;
}

@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
// - (void).cxx_destruct;
- (id)callTreeWithOptions:(NSUInteger)arg1 nodeFilter:(id /* CDUnknownBlockType */)arg2;
- (id)stackIDsToNodesWithFilter:(id /* CDUnknownBlockType */)arg1;
- (id)initWithGraph:(id)arg1 stackLogReader:(id)arg2;

@end

