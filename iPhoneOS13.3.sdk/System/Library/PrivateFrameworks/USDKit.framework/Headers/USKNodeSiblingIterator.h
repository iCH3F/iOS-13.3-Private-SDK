//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKNodeSiblingIterator : NSObject <USKIterator>
{
    iterator_range_599edad9 _range;
    struct UsdPrimSiblingIterator _it;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)nextObject;
- (id)initWithPrim:(const struct UsdPrim )arg1;
- (id)initWithSiblingRange:(const iterator_range_599edad9 )arg1;

@end

