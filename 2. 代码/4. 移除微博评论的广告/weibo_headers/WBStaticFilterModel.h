//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFilterModel.h"

@class NSString;

@interface WBStaticFilterModel : WBFilterModel
{
    NSString *_zipUrl;
    NSString *_zipMD5;
}

@property(retain, nonatomic) NSString *zipMD5; // @synthesize zipMD5=_zipMD5;
@property(retain, nonatomic) NSString *zipUrl; // @synthesize zipUrl=_zipUrl;
- (void).cxx_destruct;
- (id)getDefaultFragmentShader;
- (id)getDefaultVertexShader;
- (void)loadMarketData:(id)arg1;
- (void)loadMarketData:(id)arg1 andJsonData:(id)arg2;

@end

