//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject
{
    long long _questionType;
    PHPerson *_targetPerson;
}

@property(readonly, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, nonatomic) long long questionType; // @synthesize questionType=_questionType;
// - (void).cxx_destruct;
- (id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2;

@end

