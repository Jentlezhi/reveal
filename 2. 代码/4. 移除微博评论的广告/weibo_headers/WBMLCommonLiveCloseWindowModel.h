//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@interface WBMLCommonLiveCloseWindowModel : WBMLBaseModel
{
    _Bool _countdown;
    _Bool _click_close;
    long long _countdown_time;
    long long _click_layer;
}

@property(nonatomic) long long click_layer; // @synthesize click_layer=_click_layer;
@property(nonatomic) _Bool click_close; // @synthesize click_close=_click_close;
@property(nonatomic) long long countdown_time; // @synthesize countdown_time=_countdown_time;
@property(nonatomic) _Bool countdown; // @synthesize countdown=_countdown;

@end

