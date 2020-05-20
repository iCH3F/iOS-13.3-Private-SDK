//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayoutElementaryStackRow-Protocol.h>

@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow>
{
    NSUInteger mLength;
    double mThickness;
    long long mAlignmentShift;
    NSUInteger mFirstColumnIndex;
    double mFollowingSpace;
}

@property(readonly, nonatomic) double followingSpace; // @synthesize followingSpace=mFollowingSpace;
@property(readonly, nonatomic) NSUInteger columnCount; // @synthesize columnCount=mLength;
@property(nonatomic) NSUInteger firstColumnIndex; // @synthesize firstColumnIndex=mFirstColumnIndex;
@property(readonly, nonatomic) long long alignmentShift; // @synthesize alignmentShift=mAlignmentShift;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager )arg5;
@property(readonly, nonatomic) BOOL spansStack;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (id)initWithLength:(NSUInteger)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4;

@end

