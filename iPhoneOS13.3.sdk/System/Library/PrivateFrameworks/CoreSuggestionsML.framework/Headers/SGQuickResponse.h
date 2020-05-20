//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponse : NSObject
{
    BOOL _isCustomResponse;
    NSString *_text;
    NSString *_lang;
    NSUInteger _replyTextId;
    NSUInteger _styleGroupId;
    NSUInteger _semanticClassId;
    NSUInteger _modelId;
    NSUInteger _categoryId;
}

@property(readonly, nonatomic) BOOL isCustomResponse; // @synthesize isCustomResponse=_isCustomResponse;
@property(readonly, nonatomic) NSUInteger categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, nonatomic) NSUInteger modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) NSUInteger semanticClassId; // @synthesize semanticClassId=_semanticClassId;
@property(readonly, nonatomic) NSUInteger styleGroupId; // @synthesize styleGroupId=_styleGroupId;
@property(readonly, nonatomic) NSUInteger replyTextId; // @synthesize replyTextId=_replyTextId;
@property(readonly, copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)initWithText:(id)arg1 lang:(id)arg2 replyTextId:(NSUInteger)arg3 styleGroupId:(NSUInteger)arg4 semanticClassId:(NSUInteger)arg5 modelId:(NSUInteger)arg6 categoryId:(NSUInteger)arg7 isCustomResponse:(BOOL)arg8;

@end

