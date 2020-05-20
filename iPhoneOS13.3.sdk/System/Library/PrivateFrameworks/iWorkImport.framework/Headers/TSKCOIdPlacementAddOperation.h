//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

#import <iWorkImport/TSKCOObjectCountConstraint-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementAddOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>
{
    int _objectCount;
    int _objectCounterSpace;
}

@property(readonly, nonatomic) int objectCounterSpace; // @synthesize objectCounterSpace=_objectCounterSpace;
@property(readonly, nonatomic) int objectCount; // @synthesize objectCount=_objectCount;
- (void)saveToArchiver:(id)arg1 message:(struct Operation )arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation )arg2;
- (id)toString;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (shared_ptr_f167ad79)newTransformableOperation;
- (id)operationWithNewNoop:(BOOL)arg1;
- (int)placementType;
- (id)initWithUUIDPath:(id)arg1 toIndex:(int)arg2;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 toIndex:(int)arg2;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 toIndex:(int)arg2 objectCount:(int)arg3 objectCounterSpace:(int)arg4;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 toIndex:(int)arg2 noop:(BOOL)arg3 objectCount:(int)arg4 objectCounterSpace:(int)arg5;
- (id)initWithAddress:(const vector_4dc5f307 )arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5 objectCount:(int)arg6 objectCounterSpace:(int)arg7;

@end

