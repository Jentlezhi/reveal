//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMAdAnswerModel : XMModel
{
    NSString *_answer;
    NSString *_answerLink;
    long long _answerCode;
    long long _rate;
    long long _answerClickType;
    NSString *_answerDeepLink;
    NSArray *_answerClickStatUrls;
}

@property(retain, nonatomic) NSArray *answerClickStatUrls; // @synthesize answerClickStatUrls=_answerClickStatUrls;
@property(retain, nonatomic) NSString *answerDeepLink; // @synthesize answerDeepLink=_answerDeepLink;
@property(nonatomic) long long answerClickType; // @synthesize answerClickType=_answerClickType;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long answerCode; // @synthesize answerCode=_answerCode;
@property(retain, nonatomic) NSString *answerLink; // @synthesize answerLink=_answerLink;
@property(retain, nonatomic) NSString *answer; // @synthesize answer=_answer;
- (void).cxx_destruct;

@end

