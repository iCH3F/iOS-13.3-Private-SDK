//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface ICWeakObject : NSObject <NSCopying>
{
    id _object;
    NSUInteger _cachedHash;
}

@property(nonatomic) NSUInteger cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObject:(id)arg1;

@end

