//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol NSObject><NSCopying;

@interface PXDataSection : NSObject <NSFastEnumeration>
{
    id <NSObject><NSCopying> _outlineObject;
    NSUInteger _identifier;
    id _content;
}

@property(readonly, nonatomic) id content; // @synthesize content=_content;
@property(readonly, nonatomic) NSUInteger identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <NSObject><NSCopying> outlineObject; // @synthesize outlineObject=_outlineObject;
// - (void).cxx_destruct;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)description;
@property(readonly, nonatomic) BOOL containsAnyObjects;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)init;
- (id)initWithOutlineObject:(id)arg1;

@end

