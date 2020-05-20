//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDHint-Protocol.h>

@interface TSDDefaultHint : NSObject <TSDHint, NSSecureCoding>
{
    CGRect mBounds;
    NSUInteger mEdges;
}

+ (BOOL)supportsSecureCoding;
+ (Class)archivedHintClass;
@property(readonly, nonatomic) NSUInteger edges; // @synthesize edges=mEdges;
@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=mBounds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(id)arg1;
- (BOOL)isLastPartitionHorizontally:(BOOL)arg1;
- (id)copyForArchiving;
- (id)initWithBounds:(CGRect)arg1 edges:(NSUInteger)arg2;

@end

