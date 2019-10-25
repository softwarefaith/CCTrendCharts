//
//  CCProtocolChartDataEntityBase.h
//  CCTrendCharts
//
//  Created by Cocos on 2019/9/24.
//  Copyright © 2019 Cocos. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 所有实体都需要实现基础协议
 */
@protocol CCProtocolChartDataEntityBase <NSObject>

/**
 实体附加信息, 一般用于扩展信息, 比如K线节点需要额外提供high,low,open,close
 */
@property (nonatomic, strong) id data;


/**
 实体的值, 一般就是对应到y轴上的值
 */
@property (nonatomic, assign) CGFloat value;


/**
 实体对应的x坐标
 */
@property (nonatomic, assign) NSInteger xIndex;


@end