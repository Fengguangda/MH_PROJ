2018 08/09
	
	app.js:  注册微信小程序的应用
			 调用一个App函数，传入一个参数
	app.json:对微信小程序应用的一个全局配置
			 注册小程序所有页面的路径
			 通过配置属性来注册，里面是个list
创建一个Helloworld的页面:
	helloworld.wxml：描述我们页面上要有哪些内容
		<view>Helloworld</view>
	helloworld.js  ：帮助注册小程序的页面，类似app.js那样，通过一个配置函数
		Page
	helloworld.json:页面的一些配置，至少要传入一个空的配置对象
	helloworld.wxss:小程序的样式
	
通过app.json来注册Helloworld这个页面的路径

通过helloworld.wxss中进行小程序的样式调整
在wxss对这个view标签进行样式定义
view{
	width:
	height:40rpx--->指的是我们的一个响应式的一个屏幕像素
	text-align:center

}

2018 08/10
代码结构:
.json 后缀的 JSON 配置文件
.wxml 后缀的 WXML 模板文件
.wxss 后缀的 WXSS 样式文件
.js 后缀的 JS 脚本逻辑文件

1)JSON配置
app.json:是当前小程序的全局配置，包括了小程序的所有页面路径、界面表现、网络超时时间、底部 tab 等。
如:
{
  "pages":[
    "pages/index/index",
    "pages/logs/logs"
  ],
  "window":{
    "backgroundTextStyle":"light",
    "navigationBarBackgroundColor": "#fff",
    "navigationBarTitleText": "WeChat",
    "navigationBarTextStyle":"black"
  }
}
project.config.json:工具配置,针对各自喜好做一些个性化配置，例如界面颜色、编译配置等等
page.json:页面配置,这里的 page.json 其实用来表示 pages/logs 目录下的 logs.json 这类和小程序页面相关的配置。

2)WXML 模板
WXML 充当的就是类似 HTML 的角色
如果你需要把一个 Hello World 的字符串显示在界面上。
WXML 是这么写 :
<text>{{msg}}</text>
JS 只需要管理状态即可:
this.setData({ msg: "Hello World" })
通过 {{ }} 的语法把一个变量绑定到界面上，我们称为数据绑定。
仅仅通过数据绑定还不够完整的描述状态和界面的关系，还需要 if/else, for等控制能力，在小程序里边，这些控制能力都用 wx: 开头的属性来表达。

3）WXSS 样式
WXSS 具有 CSS 大部分的特性，小程序在 WXSS 也做了一些扩充和修改。
新增了尺寸单位。在写 CSS 样式时，开发者需要考虑到手机设备的屏幕会有不同的宽度和设备像素比，采用一些技巧来换算一些像素单位。
WXSS 在底层支持新的尺寸单位 rpx ，开发者可以免去换算的烦恼，只要交给小程序底层来换算即可，由于换算采用的浮点数运算，所以运算结果会和预期结果有一点点偏差。
提供了全局的样式和局部样式。和前边 app.json, page.json 的概念相同，
你可以写一个 app.wxss 作为全局样式，会作用于当前小程序的所有页面，局部页面样式 page.wxss 仅对当前页面生效。
此外 WXSS 仅支持部分 CSS 选择器

4）JS 交互逻辑
一个服务仅仅只有界面展示是不够的，还需要和用户做交互：响应用户的点击、获取用户的位置等等。在小程序里边，我们就通过编写 JS 脚本文件来处理用户的操作。
<view>{{ msg }}</view>
<button bindtap="clickMe">点击我</button>
点击 button 按钮的时候，我们希望把界面上 msg 显示成 "Hello World"，
于是我们在 button 上声明一个属性: bindtap ，在 JS 文件里边声明了 clickMe 方法来响应这次点击操作：
Page({
  clickMe: function() {
    this.setData({ msg: "Hello World" })
  }
})
此外你还可以在 JS 中调用小程序提供的丰富的 API，利用这些 API 可以很方便的调起微信提供的能力，例如获取用户信息、本地存储、微信支付等。
在前边的 QuickStart 例子中，在 pages/index/index.js 就调用了 wx.getUserInfo 获取微信用户的头像和昵称，最后通过 setData 把获取到的信息显示到界面上。

	