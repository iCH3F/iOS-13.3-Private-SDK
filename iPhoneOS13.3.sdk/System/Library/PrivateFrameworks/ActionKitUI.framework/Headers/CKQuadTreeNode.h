//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface CKQuadTreeNode : NSObject
{
    CKQuadTreeNode *_topRight;
    CKQuadTreeNode *_topLeft;
    CKQuadTreeNode *_bottomLeft;
    CKQuadTreeNode *_bottomRight;
    NSMutableDictionary *_userInfo;
    NSValue *_point;
    CGRect _bounds;
}

@property(retain, nonatomic) NSValue *point; // @synthesize point=_point;
@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
// - (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)visit:(id /* CDUnknownBlockType */)arg1;
- (void)insertPoint:(CGPoint)arg1;
- (id)nodeForPoint:(CGPoint)arg1;
@property(readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property(readonly, copy, nonatomic) NSArray *nodes;
- (id)debugDescription;
- (id)debugDescriptionWithLevel:(long long)arg1;
- (id)description;
- (id)initWithBounds:(CGRect)arg1;
- (id)init;

@end

