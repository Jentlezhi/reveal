//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlibcTradeTaokeParams;

@interface ALiTradeData : NSObject
{
    AlibcTradeTaokeParams *_taokeParams;
    CDUnknownBlockType _onTradeSuccess;
    CDUnknownBlockType _onTradeFailure;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType onTradeFailure; // @synthesize onTradeFailure=_onTradeFailure;
@property(copy, nonatomic) CDUnknownBlockType onTradeSuccess; // @synthesize onTradeSuccess=_onTradeSuccess;
@property(retain, nonatomic) AlibcTradeTaokeParams *taokeParams; // @synthesize taokeParams=_taokeParams;
- (void).cxx_destruct;

@end

