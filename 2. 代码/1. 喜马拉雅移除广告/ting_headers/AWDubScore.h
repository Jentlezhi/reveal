//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AWDubScore : NSObject
{
    float _totalScore;
    NSMutableArray *_subScore;
}

@property(readonly, nonatomic) NSMutableArray *subScore; // @synthesize subScore=_subScore;
@property(readonly, nonatomic) float totalScore; // @synthesize totalScore=_totalScore;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 refSpeech:(id)arg2 srtSegment:(id)arg3 role:(id)arg4;

@end

