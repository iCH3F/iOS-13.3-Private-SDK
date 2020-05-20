//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject
{
    id <_CNHandleStringClassificationStrategy> _classificationStrategy;
}

+ (id)classificationStrategyForQuality:(NSUInteger)arg1;
+ (id)classificationOfHandleStrings:(id)arg1 classificationQuality:(NSUInteger)arg2;
+ (id)classificationOfHandleStrings:(id)arg1;
@property(readonly, nonatomic) id <_CNHandleStringClassificationStrategy> classificationStrategy; // @synthesize classificationStrategy=_classificationStrategy;
// - (void).cxx_destruct;
- (NSUInteger)typeOfHandleString:(id)arg1;
- (void)classifyHandleString:(id)arg1 builder:(id)arg2;
- (id)description;
- (id)initWithClassificationStrategy:(id)arg1;
- (id)initWithClassificationQuality:(NSUInteger)arg1;
- (id)init;

@end

